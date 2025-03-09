var base = document.querySelector('.base');
var height = document.querySelector('.height');
var output = document.querySelector('#output');
var check = document.querySelector('#check');

function areaoftriangle(){
   
    var A=0;
    var inputbase = Number(base.value);
    var inputheight = Number(height.value);
    A= 0.5 * inputbase * inputheight;
    console.log(A);
    output.innerHTML = "The area of the triangle is " + A;


}

check.addEventListener('click', areaoftriangle);