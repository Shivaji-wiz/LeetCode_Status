class Solution:
    def simplifyPath(self, path: str) -> str:
        visited_dirs = []           #A.K.A stack =P
        path_splitted = path.split('/')
        
        for dir in path_splitted:
            if not dir or dir == '.':
                continue
            elif dir == '..':
                if visited_dirs:
                    visited_dirs.pop()
            else:
                visited_dirs.append(dir)
        
        return '/' + '/'.join(visited_dirs)        