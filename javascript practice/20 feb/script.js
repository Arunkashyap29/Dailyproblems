var currentInput = '';
var operator = '';
var firstOperand = '';

function updateDisplay(value) {
    document.getElementById('display').innerText = value;
}

function inputNumber(num) {
    currentInput += num;
    updateDisplay(currentInput);
}

function inputOperator(op) {
    if (currentInput === '') return;
    firstOperand = currentInput;
    operator = op;
    currentInput = '';
}

function inputDecimal() {
    if (!currentInput.includes('.')) {
        currentInput += '.';
        updateDisplay(currentInput);
    }
}

function clearDisplay() {
    currentInput = '';
    operator = '';
    firstOperand = '';
    updateDisplay('0');
}

function calculate() {
    if (firstOperand === '' || currentInput === '' || operator === '') return;
    var result;
    var num1 = parseFloat(firstOperand);
    var num2 = parseFloat(currentInput);
    
    if (operator === '+') result = num1 + num2;
    else if (operator === '-') result = num1 - num2;
    else if (operator === '*') result = num1 * num2;
    else if (operator === '/') result = num2 !== 0 ? num1 / num2 : 'Error';
    else if (operator === '%') result = num1 % num2;
    
    updateDisplay(result);
    currentInput = result.toString();
    firstOperand = '';
    operator = '';
}
