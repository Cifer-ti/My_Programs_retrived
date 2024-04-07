module org.com.simplelogoutbutton {
    requires javafx.controls;
    requires javafx.fxml;


    opens org.com.simplelogoutbutton to javafx.fxml;
    exports org.com.simplelogoutbutton;
}