let input = document.getElementById('inputaBox');
let buttons = document.querySelectorAll('button');

let string = "";
let arr = Array.from(buttons);
arr.forEach(button => {
  button.addEventListener('click', (e) => {
    if (e.target.innerHTML == '=') {
      string = eval(string);
      input.value = string;
    }
    else if (e.target.innerHTML == 'AC') {
      string = "";
      input.value = string;
    }
    string += e.target.innerHTML;
    input.value = string;
//     else if (e.target.innerHTML) == 'Del'){
//     string = string.substring(, string.length - 1);
//     input.value = string;
//   }
//     else {
//     string += e.target.innerHTML;
//     input.value = string;
//   }

})
}) 