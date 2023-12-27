package Jukebox10;

import java.util.TreeSet;
import java.util.List;
import java.util.Set;
import java.util.ArrayList;

public class Jukebox10 {
	public static void main(String[] args) {
		new Jukebox10().go();
	}

	public void go() {
		List<SongV4> songList = MoreMockSongs.getSongsV4();

		System.out.println(songList);

		songList.sort((one, two) -> one.getTitle().compareTo(two.getTitle()));
		System.out.println(songList);

		Set<SongV4> songSet = new TreeSet<>(songList);
		// songSet.addAll(songList);
		System.out.println(songSet);
	}
}
