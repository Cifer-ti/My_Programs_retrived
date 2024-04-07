package org.com.simplelogoutbutton;

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.ButtonType;
import javafx.stage.Stage;

import java.io.IOException;
import java.util.Objects;

public class HelloApplication extends Application {

  @Override
  public void start(Stage stage) throws IOException {
    Parent root = FXMLLoader.load(Objects.requireNonNull(getClass().getResource("scene.fxml")));
    Scene scene = new Scene(root);
    stage.setScene(scene);
    stage.show();

    stage.setOnCloseRequest(event -> {
      event.consume();
      logout(stage);
    });
  }

  public void logout(Stage stage) {

    Alert alert = new Alert(Alert.AlertType.CONFIRMATION);
    alert.setTitle("Logout");
    alert.setHeaderText("You're about to logout!");
    alert.setContentText("Do you want to save before exiting ? ");

    if (alert.showAndWait().get() == ButtonType.OK) {
      System.out.println("Logged out successfully");
      stage.close();
    }
  }

    public static void main(String[] args) {
        launch();
    }
}