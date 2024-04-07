module org.com.switchimage {
    requires javafx.controls;
    requires javafx.fxml;


    opens org.com.switchimage to javafx.fxml;
    exports org.com.switchimage;
}