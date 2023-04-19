#include <stdio.h>
#include <dirent.h>
#include <string.h>

int main(int argc, char *argv[]) {
    DIR *dir;
    struct dirent *ent;
    char *dir_path;
    char *ext;
    
    if (argc < 3) {
        printf("Usage: %s <directory> <extension>\n", argv[0]);
        return 1;
    }
    
    dir_path = argv[1];
    ext = argv[2];
    
    if ((dir = opendir(dir_path)) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            if (ent->d_type == DT_REG) {
                char *file_ext = strrchr(ent->d_name, '.');
                if (file_ext != NULL && strcmp(file_ext, ext) == 0) {
                    printf("%s/%s\n", dir_path, ent->d_name);
                }
            }
        }
        closedir(dir);
    } else {
        perror("");
        return 1;
    }
    
    return 0;
}
