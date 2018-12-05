open Types;

let str = ReasonReact.string;

  let component = ReasonReact.statelessComponent("Ramal");
  let make = (~item, _) => {
    ...component,
    render: _ =>
      <div>
        <h3>
	  (str(item.ramal->string_of_int))
        </h3>
        <p>
          (str(item.description))
        </p>
      </div>,
  };
    
