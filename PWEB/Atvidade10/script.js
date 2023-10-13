
Aluno01();
Aluno02();
Aluno03();

function Aluno01(){
    var Aluno1 = new obj1(123,'Gu');
}

function obj1(ra, nome){

    this.ra = ra;
    this.nome = nome;

    alert(" RA: " + ra);
    alert(" Nome: " + nome);

}

function Aluno02(){
    var Aluno2 = {
        ra: 777,
        nome: 'Gustavovisk'
    };
    alert(" RA: " + Aluno2.ra);
    alert(" Nome: " + Aluno2.nome);
}


function Aluno03(){
    var Aluno3 = new Object();
    Aluno03.ra = 909;
    Aluno03.nome = 'Gugu';

    alert(" RA: " + Aluno03.ra);
    alert(" Nome: " + Aluno03.nome);
}





