import ListGroup from "./components/ListGroup";


function App(){
  let items = ["Open Account", "Deposit", "Withdraw","Display"] ;
  const handleSelectItem=(item:string) => {
    console.log(item);
  }

  return <div><ListGroup items={items} heading ="Please Select an Option" onSelectItem={handleSelectItem}/></div>
}

export default App;