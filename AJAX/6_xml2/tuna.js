var xmlHttp = createXMLHttpRequestObject();

//Create object based on user's webbrowser
function createXMLHttpRequestObject() {
    var xmlHttp;
    if (window.XMLHttpRequest) {
        xmlHttp = new XMLHttpRequestObject();
    } else {
        xmlHttp = new ActiveXObject("Microsoft.XMLHTTP");
    }

    return xmlHttp;
}

//Called on load
function process() {
    if (xmlHttp) {
        try {
            xmlHttp.open("GET", "tuna.xml", true);
            xmlHttp.onreadystatechange = handleStateChange();
            xmlHttp.send(null);
        } catch (e) {
            alert(e.toString())
        }
    }
}

//handle state
function handleStateChange() {

    if (xmlHttp.readyState == 4) {
        if (xmlHttp.status == 200) {
            try {
                handleResponse();
            } catch (e) {
                alert(e.toString());
            }
        } else {
            alert(xmlHttp.statusText);
        }
    }
}

//handles xml response from the server
function handleResponse() {

    //store response as an xml object
    var xmlResponse = xmlHttp.responseXML;

    //Get root element, response, from the xml document
    root = xmlResponse.documentElement;

    //Get all data between the name tags
    names = root.getElementsByTagName("name");

    //Get all data between ssn tags
    ssns = root.getElementsByTagName("ssn");

    //Loop through arrays, and print them to screen
    var stuff = "";
    for (var i = 0; i < names.length; i += 1) {
        stuff += names(i).firstChild.data + " - " + ssns(i).firstChild.data + "<br/>";
    }

    theD = getElementById("theD");
    theD.innerHTML = stuff;
}