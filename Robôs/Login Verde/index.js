const interval = setInterval(() => {
    //Seleciona caixas de texto pra matrícula, senha e origem
    const mat = document.querySelector('[name="login"');
    const pass = document.querySelector('[name="senha"]');
    const btn = document.querySelector('[class="btn btn-large btn-block"]');
    const vermat = localStorage.getItem('matrícula');
    const verpss = localStorage.getItem('senha');

    if (vermat && verpss) {
        mat.value = vermat.toString();
        pass.value = verpss.toString();
        btn.click();
    } else {
        const matini = prompt("Insira sua matrícula");
        const pssini = prompt("Insira sua senha");
        localStorage.setItem("matrícula", matini.toString());
        localStorage.setItem("senha", pssini.toString());
    }
}, 1000)