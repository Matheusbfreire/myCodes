var cont = 0;

const interval = setInterval(() => {
    let perguntas = {
        "0": "Teste0",
        "1": "Teste1",
        "2": "Teste2",
        "3": "Teste3",
        "4": "Teste4"
    }
    let resp = `<h1>${perguntas[cont]}</h1>\n<h3>Pergunta</h3>\n<button onclick="button()">OK</button>`;

    document.querySelector(".pergunta-box").innerHTML = resp;
}, 100);

const button = () => {
    cont++;
    console.log(cont);
}
