
// 산술연산자 * % 나머지연산자. 분류할때 2(0,1) 3(0,1,2)
// 할당연산자 ** =, A += B : A값에 B를 더해서 대입하라.
// 비교연산자 ** ==, ===(숫자처럼보이지만 문자), !(아니다), !=(같지않다), !==(데이터형도 같지않다)
// 논리연산자 ***** or(||)-값중하나라도 true, and(&&)-모든값이 true, 
// 조건문
// 반복문 for (선언;조건;증가값){}

// 배열값을 불러오는 방법
let numbers = ["one","two","three","four"] // index.html 에 defer 빼야함
for(let i = 0;i < numbers.length;i++){
    document.write("<p>" + numbers[i] + "</p>");
}

/*
for(let i = 2;i < 10;i++){ // ++증가연산자 1씩 --감소연산자 1식 감소
    console.log(`${i}단`); // 구구단
    for(let j = 1;j < 10;j++){
        if((i * j) < 10){
            console.log(`${i} X ${j} = 0${i * j}`)
        }else{
            console.log(`${i} X ${j} = ${i * j}`);
        }
    }
}
*/

/*
for(let i = 2;i < 10;i++){ // index.html 에 defer 빼야함
    document.write("<div>");
    document.write(`<h3> ${i}단 </h3>`); // 
    for(let j = 1;j < 10;j++){
        if((i * j) < 10){
            document.write(`${i} X ${j} = 0${i * j} <br>`);
        }else{
            document.write(`${i} X ${j} = ${i * j} <br>`);
        }
    }
    document.write("</div>");
}
*/

/*
let numOne = prompt("첫번째 숫자를 입력하세요!");
let numTwo = prompt("두번째 숫자를 입력하세요!");
if(numOne < 50 && numTwo < 50){
    console.log("두 숫자 모두 50 미만이군요");
}else if(numOne < 50 || numTwo > 50){
    console.log("두 숫자중에 하나가 50 이하이군요");
    console.log(`결과값 ${numOne} 이거나 ${numTwo}`); // 문장과 변수 같이 `
    console.log("처음값" + numOne + "두번째값" + numTwo); // 문장과 변수 같이 + +
}else{
    console.log("무엇을 입력?");
}
*/

/*
let isShow = true;
let checked = false;

if(isShow){
    console.log('Show!'); // Show!
}else if(checked){
    console.log('Hide'); // 아무것도 안나옴
}
*/