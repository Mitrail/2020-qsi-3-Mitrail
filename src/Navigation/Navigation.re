[@react.component]
let make = _ => {
  <div>
      <button onClick={_event => {ReasonReactRouter.push("/randomDog")}}>
        {React.string("RandomDog")}
      </button>
      <button onClick={_event => ReasonReactRouter.push("/threeDog")}>
        {React.string("threeDog")}
      </button>
      <button onClick={_event => ReasonReactRouter.push("/blinkingGreeting")}>
        {React.string("blinkingGreeting")}
      </button>
      <button onClick={_event => ReasonReactRouter.push("/myProfile")}>
        {React.string("Profile")}
      </button>
  </div>;
};
