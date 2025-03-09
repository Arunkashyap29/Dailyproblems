var opt1a = document.querySelector('#opt1a');
let opt3c = document.querySelector('#opt3c');
let opt2b = document.querySelector('#opt2b');
let opt4b = document.querySelector('#opt4b');
let opt5c = document.querySelector('#opt5c');

var submitbtn = document.querySelector('#submitbtn');
var result = document.querySelector('#result');

var count=0;


function mainfunction(){
    console.log('main function called');
    
    question1();
    question2();
    question3();
    question4();
    question5();
    reset();
    

    if(count >=4){
        result.innerHTML = "Your score is " + count + "/5   You are a genius"; 
    }
    else if(count >= 2){
        result.innerHTML = "Your Score is "+count +" Not Bad"; 
    }
    else{
        result.innerHTML = "Your Score is "+count +" You need to work hard";
    }
    count = 0;
    
}
function question1(){
    if(opt1b.checked)
    {
        count++;
                
    }
      
}

function question2(){
    if(opt2b.checked)
    {
        count++;
    }
}
function question3(){
    if(opt3c.checked)
    {
        count++;
    }
}
function question4(){
   if(opt4b.checked){
    count++;
   } 
}
function question5(){
    if(opt5c.checked){
        count++;
    }
}

function reset(){
    document.querySelector('#quiz-form').reset();
}


submitbtn.addEventListener('click', mainfunction);
