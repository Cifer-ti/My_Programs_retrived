module org.example.helloscenebuilder2 {
  requires javafx.controls;
  requires javafx.fxml;


  opens org.example.helloscenebuilder2 to javafx.fxml;
  exports org.example.helloscenebuilder2;
}