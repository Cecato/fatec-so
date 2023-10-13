function Pedra(){

    jogada(1);
    
}

function Papel(){

    jogada(2);
    
}

function Tessoura(){

    jogada(3);
    
}

function random() {
    return Math.floor (Math.random() * (3 - 1 + 1)) + 1;
}

function jogada(valor){

    var computador = Math.floor (Math.random() * (3 - 1 + 1)) + 1;

    if( valor == 1){

        if( computador == 1){
            alert('Empate');
        }
        else if( computador == 2){
            alert('Derrota');
        }
        else{
            alert('Vitoria');
        }

    }
    else if(valor == 2){

        if( computador == 2){
            alert('Empate');
        }
        else if( computador == 3){
            alert('Derrota');
        }
        else{
            alert('Vitoria');
        }

    }
    else{

        if( computador == 3){
            alert('Empate');
        }
        else if( computador == 1){
            alert('Derrota');
        }
        else{
            alert('Vitoria');
        }

    }

}
