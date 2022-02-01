var xmlHttp = createXMLHttpRequestObject();

//Creates Communication Object to send to the server
function createXMLHttpRequestObject() {
    var xmlHttp;

    //Used to see if user is using internet explorer
    if (window.ActiveXObject) {
        try {
            xmlHttp = new ActiveXObject("Microsoft.XMLHTTP");
        } catch (e) {
            xmlHttp = false;
        }
    } else {
        try {
            xmlHttp = new XMLHttpRequest();
        } catch (e) {
            xmlHttp = false;
        }
    }

    //Tests to see if xmlHTTP is fasle, if not returns xmlHttp
    if (!xmlHttp) {
        alert("Cannot create that object, invaild web browser");
    } else {
        return xmlHttp;
    }
}

//Communicates with the server with communnication object
function process() {

    //Tests to see if the ready state is at 0 or 4, ready to communicate to the server
    //State 4 if response is ready and done communicating
    //State 0

    if (xmlHttp.readyState == 0 || xmlHttp.readyState == 4) {
        food = encodeURIComponent(document.getElementById("userInput").value);
        //Creates a request to the server
        //Whatever is sent has to be of the same type of receiving
        xmlHttp.open("GET", "foodstore.php?food=" + food, true);

        //Gets response from the server
        xmlHttp.onreadystatechange = handleServerResponse;
        //Sends request to the server
        //paranmeters in send is only used for post requests
        xmlHttp.send(null);
    } else {
        //This is ran if the serverState is at neither 0 or 4
        //Will recurively wait and resend until the server is ready to communicate
        setTimeout('process()', 1000);
    }
}

//handles respsonses from the server
function handleServerResponse() {
    //Checks to see if response is ready
    if (xmlHttp.readyState == 4) {
        //Checks to see if communication went smoothly
        if (xmlHttp.status == 200) {
            xmlresponse = xmlHttp.responseXML;
            xmlDocumentElement = xmlresponse.documentElement;

            message = xmlDocumentElement.firstChild.data;
            document.getElementById("underInput").innerHTML = '<span style="color:blue">' + message + '</span>';
            setTimeout('process()', 1000);
        } else {
            alert("Something went wrong during communication");
        }
    }
}