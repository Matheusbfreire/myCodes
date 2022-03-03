function alerta() {
    alert('Olá Mundo!');
}

function pergunta() {
    let nome = prompt('Qual seu nome?', 'Digite Aqui');
    alert(`Olá ${nome}! É um razer te ter em minha página!`);
}

function confirma() {
    let confirma = confirm('Confirma a operação?');
    if (confirma)
        alert('Operação confirmada!');
        else
            alert('Operação cancelada!');
}