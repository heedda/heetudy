app.get('/api/todo', (req, res) => {
    const todolist = [
        {id: 1, title: 'Todo 1', completed: true},
        {id: 2, title: 'Todo 2', completed: false},
        {id: 3, title: 'Todo 3', completed: false},
    ];
    res.json(todoList);
});