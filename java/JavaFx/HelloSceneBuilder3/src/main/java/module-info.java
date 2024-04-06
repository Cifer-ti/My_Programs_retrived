module org.example.helloscenebuilder3 {
  requires javafx.controls;
  requires javafx.fxml;


  opens org.example.helloscenebuilder3 to javafx.fxml;
  exports org.example.helloscenebuilder3;
}