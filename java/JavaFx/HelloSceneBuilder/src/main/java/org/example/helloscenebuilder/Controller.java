package org.example.helloscenebuilder;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.shape.Circle;

public class Controller {

  @FXML
  private Circle myCircle;
  private double x;
  private double y;

  public void up(ActionEvent e) {
    //System.out.println("UP");
    myCircle.setCenterY(y-=7);
  }
  public void down(ActionEvent e) {
    //System.out.println("DOWN");
    myCircle.setCenterY(y+=7);
  }
  public void left(ActionEvent e) {
    //System.out.println("LEFT");
    myCircle.setCenterX(x-=7);
  }
  public void right(ActionEvent e) {
    //System.out.println("RIGHT");
    myCircle.setCenterX(x+=7);
  }
}