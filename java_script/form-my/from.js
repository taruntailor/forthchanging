function formCheck() {
    let first = document.getElementById("fname").value;
    let last = document.getElementById("lname").value;
    let birth = document.getElementById("dob").value;
    if (first == "" || first == null) {
        document.getElementById("msg1").innerHTML = "Enter Firstname";
        return false;
    } else if (last == "" || last == null) {
        document.getElementById("msg2").innerHTML = "Enter Lastname";
        return false;
    } else if (birth == "" || birth == null) {
        document.getElementById("msg3").innerText = "Select Birthdate"
        return false
    }
}