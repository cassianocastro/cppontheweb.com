"use strict";

let input  = document.querySelector("form input");
let button = document.querySelector("form button");
let output = document.querySelector("form output");

button.addEventListener("click", (e) => {
	e.preventDefault();

	fetch(
		"http://www.mycpp.com/main.exe",
		{
			method: "post",
			body: JSON.stringify({name: input.value})
		}
	)
	.then(
		(response) => {
			if ( response.ok )
			{
				return response.json();
			}
		}
	)
	.then(
		(data) => {
			output.textContent = `O nome digitado foi: ${data.name}`;
		}
	);
});