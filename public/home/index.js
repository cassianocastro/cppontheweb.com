"use strict";

let input  = document.querySelector("form input");
let button = document.querySelector("form button");
let output = document.querySelector("form output");

button.addEventListener("click", async (e) => {
	e.preventDefault();

    let response = await fetch(
		"http://www.cppontheweb.com/",
		{
			method: "post",
			body: JSON.stringify({name: input.value})
		}
	);

    if ( response.ok )
    {
        let data = await response.json();

        output.textContent = `O nome digitado foi: ${data.name}`;
    }
});