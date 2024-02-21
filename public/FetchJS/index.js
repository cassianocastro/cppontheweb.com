const chooser = document.querySelector("#chooser");
const pre     = document.querySelector("body > pre");

function updateDisplay(verse)
{
    verse = verse.replace(" ", "");
    verse = verse.toLowerCase();

    fetch(`../../lib/${verse}.txt`)
    .then((response) => {
        if ( ! response.ok ) {
            throw new Error(`HTTP Error: ${response.status}`);
        }

        return response.text();
    })
    .then((text) => {
        pre.textContent = text;
    })
    .catch((error) => {
        pre.textContent = "Couldn't fetch the resource...";
    });
}

chooser.addEventListener("change", () => {
    updateDisplay(chooser.value);
});

updateDisplay("Verse 1");

chooser.value = "Verse 1";

// class Person
// {

//     constructor(name, age)
//     {
//         this.name = name;
//         this.age  = age;
//     }

//     getName()
//     {
//         return this.name;
//     }

//     getAge()
//     {
//         return this.age;
//     }
// }

// class PersonFactory
// {

//     create(name = "", age = 18)
//     {
//         return new Person(name, age);
//     }
// }

// let person = new PersonFactory().create("Cassiano", 24);

// console.log(person instanceof Person);