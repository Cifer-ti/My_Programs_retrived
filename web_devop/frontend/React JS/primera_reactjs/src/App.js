import './App.css';

const App = () => {
  const name = 'Yo destenir';
  const isNameShowing = false;
  const isFemale = false;

  const Person = (props) => {
    return (
      <>
        <h1>Name: {props.name}</h1>
        <h2>Last Name: {props.lastName}</h2>
        <h2>Age: not {props.age}</h2>
      </>
    )
  }


  return (
    <div className="App">
     <h1>{isNameShowing ? name : 'Mi variable de nombre es falsa'}, 
     No se cuanto de humano todavia soy</h1>

     <Person 
     name={'Kuro'}
     lastName="Cifer"
     age="Not defined"
     />

    <Person 
     name="Loyd"
     lastName="Viska"
     age="Not defined"
     />

     {isFemale ? (
      <>
        fria
      </>
     ): (
      <h1>frio</h1>
     )}
    </div>
  );
}

export default App;
