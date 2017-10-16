# Shortest-Job-First-Scheduling
Shortest Job first is a simple CPU scheduling in which the CPu attempts to execute the shortest job available in the job queue.
this illustration has both the non-preemptive version of the SJF as well as the preemptive version which is also called as the shortest remaining time first.

### Running
Open the .sln file using the visual studio and build the project.
Add the processes first, the numbering will start from 0.
Then click on the function select buttons to choose the preemptive or non-preemptive version.

## Non-Preemptive SJF
In a non Preemptive SJF the CPU check the shortest job available in the queue and it executes it. While the CPU is executing a process more processes can arrive and they will wait until the CPU finishes execution of it's current process.
#### Algorithm(Pseudocode) 
```C++
contExecution=true;
while(contExecution)
{
  selectedProcess=selectShortestArrivedProcess();
  
  if(selectedProcess == null)
    cpuIdle();
  else
    executeProcessCompletely(selectedProcess);
  
  if(allProcessesExecuted())
    contExecuted=false;
}
```
#### Screenshot(Non-Preemptive)
![image](https://github.com/rkv225/Shortest-Job-First-Scheduling/blob/master/non-preemptive.PNG)

## Preemptive SJF
In preemptive SJF the CPU selects the process having the shortest remaining bust time. The cpu executes a process for one time instant and again checks for the remaning burst times of the processes. If any process has the burst time less than the process which is executing presently, the CPU will make the current executing process in waiting state and start executing the process having the shortest remaining burst time.
#### Algorithm(Pseudocode)
```C++
contExecution=true;
while(contExecution)
{
  initilizeRemaingBurst();//initialize the remaining burst times of all the processes to their burst times
  
  selectedProcess=selectProcess();//select a process with least remaining burst time
  
  if(selectedProcess == null)
    cpuIdle();
  else
    executeOneTimeinstantOfProcess(selectedProcess);
    decRemainingBurst(selectedProcess);//decrement the remaining burst time of the process
  
  if(allProcessesExecuted())//no process left whose burst time is remaining
    contExecuted=false;
}
```
#### Screenshot(Preemptive)
![image](https://github.com/rkv225/Shortest-Job-First-Scheduling/blob/master/preemptive.PNG)
