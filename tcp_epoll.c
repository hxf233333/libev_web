#include <stdio.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/epoll.h>
#include <unistd.h>
#include <fcntl.h>

int init_listen_fd(int port, int epfd) {
    
}

void do_accept(int lfd, int epfd) {

}

void do_read(int cfd, int epfd) {

}

void epoll_run(int port) {

}

int main(int argc, char* argv[]) {
    //命令行参数获取 端口 和 server提供的目录
    if(argc < 3) {
        printf("./server port path\n");
    }

    //获取用户输入的端口
    int port = atoi(argv[1]);
    
    //改变进程工作目录
    int ret = chdir(argv[2]);
    if(ret != 0) {
        perror("chdir error");
        exit(1);
    }

    //启动 epoll监听 
    epoll_run(port);
}