
let cardinput = document.getElementById("card");
let carderror = document.getElementById("carderror");

cardinput.addEventListener("blur", function(){

    let user = cardinput.value;
      let cardpattern = /^5[1-5]\d{2}-\d{4}-\d{4}$/;

    if(user===""){
        cardinput.style.backgroundColor="red";
        carderror.textContent ="incorrect nb!!";
    }
    else if(!cardpattern.test(user)){
         cardinput.style.backgroundColor="red";
         carderror.textContent ="this is  incorrect!";
    }
      else{
        cardinput.style.backgroundColor="white";
         carderror.textContent ="";
    }
});
let dateinput= document.getElementById("exp");
let dateerror= document.getElementById("dateerror");
dateinput.addEventListener("blur", function(){
    let user1= dateinput.value;
    let date = /^(0[1-9])-\d{4}$/;
    if(user1===""){
        dateinput.style.backgroundColor="red";
        dateerror.textContent = "this is obligatory!"
    }
    else if(!date.test(user1)){
        dateinput.style.backgroundColor="red";
        dateerror.textContent = "incorrect!";
    }
    else{
        dateinput.style.backgroundColor="white";
        dateerror.textContent = "";
    }
});
let codeinput = document.getElementById("code");
let codeerror = document.getElementById("errorcode");
codeinput.addEventListener("blur", function(){
let user2= codeinput.value;
let code = /^\d{3}$/;
if(user2===""){
   codeinput.style.backgroundColor="red";
    codeerror.textContent = "obligatory!";
}
else if(!code.test(user2)){
     codeinput.style.backgroundColor="red";
    codeerror.textContent = "error pls enter 3 digits!";
}
else{
     codeinput.style.backgroundColor="white";
    codeerror.textContent = "";
}
});

let fninput = document.getElementById("fname");
let ferror = document.getElementById("ferror");
fninput.addEventListener("blur", function(){
let name1= fninput.value;
let nm = /^[A-Z][a-z]*$/
if(name1===""){
    fninput.style.backgroundColor="red";
    ferror.textContent = "obligatory!";
}
else if(!nm.test(name1)){
    fninput.style.backgroundColor="red";
    ferror.textContent = "error! enter ur name(first letter uppercase)!";
}
else{
     fninput.style.backgroundColor="white";
    ferror.textContent = "";
}
});

let lninput = document.getElementById("lname");
let lerror = document.getElementById("lerror");
lninput.addEventListener("blur", function(){
let name2= lninput.value;
let nml = /^[A-Z][a-z]*$/
if(name2===""){
    lninput.style.backgroundColor="red";
    lerror.textContent = "obligatory!";
}
else if(!nml.test(name2)){
    lninput.style.backgroundColor="red";
    lerror.textContent = "error! enter ur name(first letter uppercase)!";
}
else{
     lninput.style.backgroundColor="white";
    lerror.textContent = "";
}
});

let button = document.getElementById("btn"); 
let message = document.getElementById("message");
let firstname = document.getElementById("fname");
button.addEventListener("click", function(event){
event.preventDefault();
let m = firstname.value;
message.textContent  =  "Thank you " + m+ " for your payment we will quickly process your request.";

});
