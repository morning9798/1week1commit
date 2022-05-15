// 문자열 "" 2015년 이후 var 보다는 let, const 를 사용.
let myName = "각자이름";
let email = "이메일@seoil.ac.kr";
let hello = 'Hello ${myName}'; //백틱, 보간법으로 중간에 값을 추가 가능
document.write(Hello + " 님, 반갑습니다. 당신의 이메일은" + email);

// 숫자- 정수 미 부동소수점
let number = 123;
let opacity = 1.53;
document.write(number + opacity);
document.write("br" + number + opacity);

// 불린데이터 - true, false 2개의 값만
let checker = true;
// 불린데이터는 언제 사용하나? 조건문. 조건일때만 코드가 작동

// 값을 할당하지 않은 상태
let undef;
// 데이터 상태를 물어서 undefined 일때만 다시 데이터를 추가
let obj = {abc:123}; // 중괄호안에 abc 속성에 숫자 데이터를 할당 == 객체데이터
console.log(undef);
console.log(obj.abc); // ~~의 해당되는 것은 닷(.)을 사용
console.log(obj.xyz);

// 값이 의도적으로 비어놓은 상태
let empty = null;
//if(empty == null){}
// Object 객체데이터 여러 데이터 {}안에 Key:Value 형태로 넣을 수 있다.
let user = {
    name:"홍길동",
    age : 88,
    isValid : true
}
document.write(user.name);
document.write(user.age);
document.write(user.isValid);

// 속성이 아닌 메서드로 객체 데이터 값을 넣을 수 있다.


// & ||
// & And연산자, 두 값을 비교할때 모두 참
// || Or연산자, 두 값중에 하나라도 참
// 예약어 this,if,for,break
// 함수 : 명령 집합 function
function helloFunc(){
    // 여러데이터 고정된 데이터, 중간비울 수 없음 배열
    let fruits=['Apple','Banana','Cherry'];
    document.write(fruits[0]);
    fruits[2] = "Orange";
    console.log(fruits);
}
helloFunc();
// return 키워드로 값을 함수밖으로 내보내기
function returnFunc(){
    return 123;
}
let a = returnFunc();
console.log(a);
// 함수값 안에 매개변수(Parameters)
function positionXY(x,y){
    return x+y;
}
let pos = positionXY(100,20);
console.log(pos);
// 자바스크립트에는 이름없는 함수로 스크립트를 단순화시켜서 사용==익명함수
let world = function(){

}
world();