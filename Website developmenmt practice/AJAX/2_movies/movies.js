//Use an onload function set things up
function creatteList() {
    var s;
    s = "<ul>" +
        "<li>Dark Knight</li>" +
        "<li>Princess Bride</li>" +
        "<li>Lord of the Rings</li>" +
        "</ul>";

    divMovies = document.getElementById("divMovies");
    divMovies.innerHTML = s;
}