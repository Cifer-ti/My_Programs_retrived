import './App.css';
import { useState, useEffect } from 'react';

const App = () => {
  const [counter, setCounter] = useState(0);

  useEffect(() => {
    setCounter(100);
  }, []);

  return (
    <div className="App">
     <button onClick={() => setCounter((prevCount) => prevCount - 1)}>-</button>
     <h1>{counter}</h1>
     <button onClick={() => setCounter((prevCount) => prevCount + 1)}>+</button>
    </div>
  );
}

export default App;

// when something is called as a funciton and it's name starts with hook,
// in react it is called a function

// A call back function is one without a name, and it's just waiting for some
// command to be executed.

