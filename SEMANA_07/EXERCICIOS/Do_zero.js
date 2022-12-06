var api="http://127.0.0.1:3071" ;

$(document).ready(() => {
    users.list();
});

var users = {
    list(){
        $.ajax({
            url: api + "/users",
            type:'GET' , 
            sucsess: resultado => {
                var texto ="";
                resultado.forEach(linha => {
                    texto+='<div class=title>'+data.title+'</div><BR>'
                });

            }
        });
        $('#main').html('texto');
    }
}

function usuarios()
{
    $.get(api+"users", function(resultado){
        var texto=" ";
        resultado.forEach(linha =>  {
            texto+'<div class="title"> '+linha.title+'</div><br>' 
        });
        $('main2').html(texto);
    });
}