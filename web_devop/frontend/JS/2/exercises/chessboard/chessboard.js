function generateChessboard(size) {
  let chessboardString = "";
  for(let i = 0; i < 8; i++) {
    let rowString = "";

    for(let j = 0; j < 8; j++) {
      if((i + j) % 2 == 0)
        rowString += " ";
      else
        rowString += "#";
    }

    chessboardString += rowString + "\n";
  }
  
  console.log(chessboardString);
}

let size = 8;

generateChessboard(size);