/* const zeroFill = n => {
  return ('0' + n).slice(-2);
}

const interval = setInterval(() => {
  const now = new Date();
  var dataHora = '<h1>Site será liberado somente no teu aniversário!!</h1>\n<h1>';
  
  if(now.getDay()!=17 && now.getMonth()!=6) {
    dataHora += 
  //dataHora += zeroFill(now.getHours()) + ':' + zeroFill(now.getMinutes()) + ':' + zeroFill(now.getSeconds());
    //dataHora += '</h1>';
  } else {
    window.location.href = "https://carolzinha.mathzeus.repl.co/asks-page.html";
  }

  document.querySelector('.data-hora').innerHTML = dataHora;
}, 1000); */

const second = 1000;
const minute = second * 60;
const hour = minute * 60;
const day = hour * 24;

let count_down = new Date('10/04/2022 00:00:00').getTime();
let x = setInterval(() => countDown(), second);

function countDown() {
  const rnow = new Date();
  console.log(rnow);
  let now = new Date(Date.now()).getTime();
  let diff = count_down - now;
  if(rnow.getDate()!=17 && rnow.getMonth()!=5) {
    let resp = `Dias pro seu aniversário\n🥳 🥳`;
  
    document.querySelector('.title').innerText = resp;
  
    resp = `${Math.floor(diff / day)} ${Math.floor(diff % day / hour)}:${Math.floor(diff % hour / minute)}:${Math.floor(diff % minute / second)}`;
  
    document.querySelector('.time').innerText = resp;
  } else {
    window.location.href = "https://carolzinha.mathzeus.repl.co/asks-page.html";
  }
}

/* function resetCountdown() {
  clearInterval(x);
  let date_end = document.form_main.date_end.value;
  count_down = new Date(`${date_end} 00:00:00`).getTime();
  x = setInterval(() => countDown(), second);
} */