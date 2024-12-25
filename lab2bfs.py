graph = {
  'a': ['b', 'c'],
  'b': ['d', 'e'],
  'c': ['f'],
  'f': [],
  'd': [],
  'e': []
}

def bfs(graph, start):
    visited = {}
    queue = [(start, 0)]  

    while queue:
        node, cost = queue.pop(0)

        if node not in visited:
            print(node, end=" ")
            visited[node] = cost  # Record the cost to reach this node

            for neighbour in graph[node]:
                if neighbour not in visited:
                    queue.append((neighbour, cost + 1))

    print("\nCost to reach each node:", visited)

print("Following is the Breadth-First Search")
bfs(graph, 'a')