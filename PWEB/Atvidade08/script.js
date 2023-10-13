function Pesquisa(){

    var i, auxIdade = 0, somaIdade = 0, pessoaVelha = 0, pessoaNova = 80, avalP = 0, avalOB = 0, homem = 0, mulher = 0;

    for( i = 0; i < 45; i++){

        auxIdade = idadeAleatoria();

        somaIdade += auxIdade;

        if( auxIdade > pessoaVelha){
            pessoaVelha = auxIdade;
        }

        if( auxIdade < pessoaNova){
            pessoaNova = auxIdade;
        }

        if( avalAleatoria() == 1){
            avalP++;
        }

        if( avalAleatoria() == 4 || avalAleatoria() == 3){
            avalOB++;

        }

        if( sexAleatoria() == 1){
            homem++;
        }
        else{
            mulher++;
        }

    }

    alert('Media Idade: ' +  Math.round(somaIdade / 45) );
    alert('Maior idade: ' + pessoaVelha);
    alert('Menor idade: ' + pessoaNova);
    alert('Avaliações Péssimas: ' + avalP);
    alert('Porcentagem de Ótimo e Bom: ' + Math.round((avalOB/45)*100) +'%');
    alert('Homens: ' + homem + ' Mulheres: ' +mulher);

    
}

function idadeAleatoria(){

    return Math.floor (Math.random() * (80 - 12 + 1)) + 12;

}

function avalAleatoria(){

    return Math.floor (Math.random() * (4 - 1 + 1)) + 1;

}

function sexAleatoria(){

    return Math.floor (Math.random() * (2 - 1 + 1)) + 1;

}



