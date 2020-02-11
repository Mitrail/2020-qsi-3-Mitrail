open ReasonUrql;
/* Be sure to open the Hooks module to bring necessary types into scope. */
open Hooks;

type viewer = {
  login: string,
};

type data = {
  viewer: viewer,
};

let typeDef = {|
  type Author {
    id: Int!
    firstName: String
    lastName: String
    posts: [Post] # the list of Posts by this author
  }
|};

[@react.component]
let make = _ => {
  let key = "";
  
  <div>
    <button >
        "Execute Mutation"-> React.string
    </button>
  </div>
}
