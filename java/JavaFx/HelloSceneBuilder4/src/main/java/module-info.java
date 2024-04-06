module org.example.helloscenebuilder4 {
  requires javafx.controls;
  requires javafx.fxml;


  opens org.example.helloscenebuilder4 to javafx.fxml;
  exports org.example.helloscenebuilder4;
}