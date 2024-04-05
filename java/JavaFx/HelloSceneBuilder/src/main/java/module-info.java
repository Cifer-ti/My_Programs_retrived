module org.example.helloscenebuilder {
  requires javafx.controls;
  requires javafx.fxml;


  opens org.example.helloscenebuilder to javafx.fxml;
  exports org.example.helloscenebuilder;
}