const interval = setInterval(() => {
    //Seleciona caixas de texto pra matrícula, senha e origem
    const mat = document.querySelector('[name="S48_"]');
    const pass = document.querySelector('[name="S62_"]');
    const org = document.querySelector('[name="S76_"]');
    const btn = document.querySelector('[name="S122_"]');
    const vermat = localStorage.getItem('matrícula');
    const verpss = localStorage.getItem('senha');

    if (vermat && verpss) {
        mat.value = vermat.toString();
        pass.value = verpss.toString();
        org.selectedIndex = 9;
        btn.click();
    } else {
        const matini = prompt("Insira sua matrícula");
        const pssini = prompt("Insira sua senha");
        localStorage.setItem("matrícula", matini.toString());
        localStorage.setItem("senha", pssini.toString());
    }
}, 1000)