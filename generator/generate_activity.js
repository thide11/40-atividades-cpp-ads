import fs from "fs";
import path from 'path';
import Handlebars from "handlebars";
import { fileURLToPath } from 'url';
import { toPascalCase, toCamelCase, toSnakeCase } from 'js-convert-case';
const dirname = path.dirname(fileURLToPath(import.meta.url));

function generate(className) {
  const cppTemplate = Handlebars.compile(fs.readFileSync("template.cpp").toString())
  const camelCase = toCamelCase(className);
  const params = {
    camelCase,
    pascalCase: toPascalCase(className),
    snakeCase: toSnakeCase(className),
  }
  const cppOutput = cppTemplate(params);
  fs.writeFileSync(path.resolve(dirname, `../`,  camelCase + "Activity.cpp"), cppOutput);

  const hTemplate = Handlebars.compile(fs.readFileSync("template.h").toString())
  const hOutput = hTemplate(params);
  fs.writeFileSync(path.resolve(dirname, `../`,  camelCase + "Activity.h"), hOutput);
}

if(process.argv.length > 2) {
  generate(process.argv[2]);
} else {
  console.log("Passe o parametro nome da activity")
}