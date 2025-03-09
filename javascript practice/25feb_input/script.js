let input = document.querySelector('.userinput');
let button = document.querySelector('.button');
let output = document.querySelector('#output');

function oddevenchecker()

{

    let inputValue = Number(input.value);
   
if(inputValue % 2 == 0|| inputValue == 0)
    {
        console.log(inputValue,"even");
        output.innerHTML= inputValue + " is even";
    }
    else {
        console.log(inputValue,"odd");
        output.innerHTML= inputValue + " is odd";
    }

};

button.addEventListener('click', oddevenchecker);

