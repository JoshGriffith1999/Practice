var xmlHttp = createXMLHttpRequestObject();

//Returns the correct object based on the webbrowser that the user is using
function createXMLHttpRequestObject() {
    var xmlHttp;

    if (window.XMLHttpRequest) {
        xmlHttp = new XMLHttpRequest();
    } else {
        //This only used if the user is using an older version microsoft explorer
        xmlHttp = new ActiveXObject("Microsoft.XMLHTTP");
    }

    return xmlHttp;
}

function process() {

    //Checks to see if xmlHttp is not void
    if (xmlHttp) {
        try {
            //Does start a connection to the server, it configures/setsup the connection settings
            xmlHttp.open("GET", "bacon.txt", true);
            //changes then ready state of xmlHttp object
            xmlHttp.onreadystatechange = handleServerResponse();
            //Sends the request, null is passed since we are not using the POST method
            xmlHttp.send(null);
        } catch (e) {
            alert(e.toString())
        }
    }
}

//Handles the server response
function handleServerResponse() {

    theD = document.getElementById("theD");
    //States are "guide lines" on how set up a connection
    //state 1: Establish connection with a server
    //state 2: Server recieved the request
    //state 3: Server is processing the request, completing the task that was asked of it
    //state 4: Request is finished, whatever was asked for is ready, does not mean that repsonse went okay
    if (xmlHttp.readyState == 1) {
        theD.innerHTML += "Status 1: Connection Established <br/>";
    } else if (xmlHttp.readyState == 2) {
        theD.innerHTML += "Status 2: Server recieved request <br/>";
    } else if (xmlHttp.readyState == 3) {
        theD.innerHTML += "Status 3: Server is processing the request <br/>";
    } else if (xmlHttp.readyState == 4) {
        //Checks to see if everything went okay
        if (xmlHttp.status == 200) {
            try {
                text = xmlHttp.responseText;
                theD.innerHTML += "Status 4: Request is finished, response is ready <br/>";
                theD.innerHTML += text;
            } catch (e) {
                alert(e.toString())
            }
        } else {
            alert(xml.statusText + "<br/>");
        }
    }

}