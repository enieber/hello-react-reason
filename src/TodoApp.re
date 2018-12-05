open Types;

type action = | AddItem;

type state = {
  items: list(item)
};

let str = ReasonReact.string;

let component = ReasonReact.reducerComponent("TodoApp");

let newItem = () => {ramal: 1, description: "Test"};

let make = (children) => {
  ...component,
  initialState: () => {
    items: [
      {ramal: 2, description: "test"}
    ]
  },
  reducer: (action, {items}) =>
    switch action {
      | AddItem => {
	  ReasonReact.Update({
	  items: [
	      newItem(),
	      ...items
	  ]
        })
      }
    },
  render: ({state: {items}, send}) => {
   let numItems = List.length(items);
    <div>
      <div className="title"> 
	(str("What to do"))
        <button onClick=((_evt) => send(AddItem))>
	  (str("Add +1"))
	</button>
      </div>
        {
	    items |>
	      List.map(item => 
		       <Ramal
		         item
			 />
		      ) |> 
	      Array.of_list |>
	      ReasonReact.array
	 }
      <div className="footer">
        (<CountItems size={numItems} />)
      </div>
    </div>
  }
};

