type action = | AddItem;

type item = {
  title: string,
  completed: bool
};

type state = {
  items: list(item)
};

let str = ReasonReact.string;

let component = ReasonReact.reducerComponent("TodoApp");

let newItem = () => {title: "Click a button", completed: true};

let make = (children) => {
  ...component,
  initialState: () => {
    items: [
      {title: "Write some things to do", completed: false}
    ]
  },
  reducer: (action, {items}) =>
    switch action {
	    | AddItem => ReasonReact.Update({items: [newItem(), ...items]})
    },
  render: ({state: {items}, send}) => {
   let numItems = List.length(items);
    <div>
      <div className="title"> 
	(str("What to do"))
        <button onClick=((_evt) => send(AddItem))>
	  (str("Add something"))
	</button>
      </div>
      <div className="items"> (str("Nothing")) </div>
      <div className="footer">
        (<CountItems size={numItems} />)
      </div>
    </div>
  }
};

