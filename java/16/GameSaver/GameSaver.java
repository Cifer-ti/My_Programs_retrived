package GameSaver;

import java.io.*;
import java.io.ObjectOutputStream.PutField;
import java.security.PublicKey;

import javax.crypto.spec.GCMParameterSpec;

public class GameSaver {
	
	public static void main(String[] args) {
		GameCharacter one = new GameCharacter(50, "Elf",
                                          new String[]{"bow", "sword", "dust"});
    GameCharacter two = new GameCharacter(200, "Troll",
                                          new String[]{"bare hands", "big ax"});
    GameCharacter three = new GameCharacter(120, "Magician",
                                            new String[]{"spells", "invisibility"});

		try {
			ObjectOutputStream os = new ObjectOutputStream(new FileOutputStream("Game.ser"));
			os.writeObject(one);
			os.writeObject(two);
			os.writeObject(three);
			os.close();
		} catch(IOException ex) {
			ex.printStackTrace();
		}

		try {
			ObjectInputStream is = new ObjectInputStream(new FileInputStream("Game.ser"));
			GameCharacter oneRestore = (GameCharacter) is.readObject();
			GameCharacter twoRestore = (GameCharacter) is.readObject();
			GameCharacter threeRestore = (GameCharacter) is.readObject();

			System.out.println("One's type is: " + oneRestore.getType());
			System.out.println("Tow's weapons are: " + twoRestore.getWeapons());
		} catch(Exception ex) {
				ex.printStackTrace();
		}
	}
}

