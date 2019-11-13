### How to submit
- fork this repository
- clone your fork to your local machine: `git clone https://github.com/YOUR_USERNAME/Povar.git`
- add this repository as an upstream: `git remote add upstream https://github.com/Siusarna/Povar.git`
- for every new task you're gonna submit, in your local repository:
  - `git checkout master` and then create new branch, name it according to task performed (aka feature branch): `git checkout -b authorization`. In this example feature branch is named `authorization`

- make pull-request to this repository following these steps:
  - checkout the relevant feature branch: `git checkout authorization` (in this example feature branch is called `authorization`)
  - commit your changes if any to the feature branch (do not forget to change the status of the function in README.md)
  - checkout `master` branch: `git checkout master`
  - pull latest changes from upstream `master` branch: `git pull upstream master`
  - rebase your feature branch onto `master`: `git checkout authorization && git rebase master`
  - resolve merge conflicts if there are any
  - push feature branch to your remote repository: `git push --set-upstream origin authorization`
  - make pull-request from your repository to this repository via GitHub web-interface
- post a link to your subtask PR in the
     [Siusarna](https://t.me/Siusarna)
     and ask Siusarna for a code review
     * wait for review
     * if necessary, make changes, until your code will be approved and merged
     * once the code review phase successfully finished
 
- when any changes are required (whether it si your own decision or requested by a Siusarna)
  * checkout your feature branch before any code base updates: `git checkout <feature-branch-name>`
  * once committed the changes and ready to update your pull request just `git push origin`;
    GitHub will track your new commits and update the pull request
     
