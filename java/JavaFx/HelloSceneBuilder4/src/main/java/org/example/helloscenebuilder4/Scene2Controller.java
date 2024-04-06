package org.example.helloscenebuilder4.controller;

import javafx.fxml.FXML;
import javafx.scene.control.Label;

public class Scene2Controller {

  @FXML
  Label greetLabel;

  public void displayName(String username) {
    greetLabel.setText("Yo " + username + " sup ?");
  }
}
